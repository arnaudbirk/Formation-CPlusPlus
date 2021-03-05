typedef unsigned int uint;

template<class T>
class my_shared_ptr
{
    
    public:
    
    // constructeur par dŽfaut
    my_shared_ptr(){myPtr=nullptr; countPtr= new uint(0);}
    
    // constructeur avec un objet
    my_shared_ptr(T* t){myPtr = t; countPtr= new uint(1);}
    
    // constructeur de copie
    my_shared_ptr(my_shared_ptr& sptr){
        buildWithOther(sptr);
    }
    
    // opŽrateur d'assignement
    my_shared_ptr& operator = (my_shared_ptr& sptr){

        // remise ˆ zero de l'objet
        if (this->myPtr!=nullptr)    delete this->myPtr;
        if (this->countPtr!=nullptr) delete this->countPtr;
        
        // copie du nouvel objet
        countPtr = sptr.countPtr; // affectation du mme pointeur de compteur
        myPtr = sptr.myPtr; // affectation du mme pointeur
        if (this->myPtr!=nullptr) (*countPtr)++; // si le pointeur n'est pas null, il faut augmenter le compteur
        
        return *this;
    }
    
    // destructeur
    ~my_shared_ptr(){
        (*this->countPtr)--;
        if ((*this->countPtr)==0){ // si le compteur est null, on doit dŽtruire l'objet et le compteur
            delete myPtr;
            delete countPtr;
        }
    }
    
    // accs au pointeur
    T* operator ->() const {return myPtr;}
    T& operator *()  const {return myPtr;}

    // accs au compteur
    int getCount() const { return (countPtr != nullptr ? *countPtr : 0);}
    
    private :
    
    // recopie ˆ partir d'un autre pointeur
    void buildWithOther(const my_shared_ptr& sptr){
        this->myPtr = sptr.myPtr; // affectation du mme pointeur
        this->countPtr = sptr.countPtr; // affectation du mme pointeur de compteur
        if (this->myPtr!=nullptr) (*countPtr)++; // si le pointeur n'est pas null, il faut augmenter le compteur
    }
    
    private :
    
    // le pointeur
    T* myPtr;
    
    // le compteur
    uint* countPtr;
};

// une petite classe pour tester
class maClasse{
    public :
    maClasse(std::string _nom){nom = _nom;}
    
    const std::string getNom() const {return nom;}
    
    private :
    std::string nom;
};

int main()
{
    std::cout << "Test de mon pointeur ˆ null " << std::endl;
    my_shared_ptr<maClasse> myP1;
    std::cout << myP1.getCount() << std::endl;

    std::cout << "Test de mon pointeur " << std::endl;
    my_shared_ptr<maClasse> myP2 (new maClasse("truc"));
    std::cout << "  " << "myP2 " << myP2->getNom() << " " << myP2.getCount() << std::endl;
    
    {
        std::cout << "Pointeur par constructeur " << std::endl;
        my_shared_ptr<maClasse> myP3 (myP2);
        std::cout << "  " << "myP2 " << myP2->getNom() << " " << myP2.getCount() << std::endl;
        std::cout << "  " << "myP3 " << myP3->getNom() << " " << myP3.getCount() << std::endl;
    }
    
    std::cout << "  " << "myP2 " << myP2->getNom() << " " << myP2.getCount() << std::endl;
    
    {
        std::cout << "Recopie du pointeur " << std::endl;
        my_shared_ptr<maClasse> myP3;
        myP3 = myP2;
        std::cout << "  " << "myP2 " << myP2->getNom() << " " << myP2.getCount() << std::endl;
        std::cout << "  " << "myP3 " << myP3->getNom() << " " << myP3.getCount() << std::endl;

        std::cout << "Recopie du pointeur " << std::endl;
        my_shared_ptr<maClasse> myP4 (new maClasse("bidule"));
        std::cout << "  " << "myP4 " << myP4->getNom() << " " << myP4.getCount() << std::endl;
        myP4 = myP2;
        std::cout << "  " << "myP4 " << myP4->getNom() << " " << myP4.getCount() << std::endl;
    }

    std::cout << "  " << "myP2 " << myP2->getNom() << " " << myP2.getCount() << std::endl;
    
    return 0;
}
