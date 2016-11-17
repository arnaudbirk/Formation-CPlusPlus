#ifndef CCOORD_H_INCLUDED
#define CCOORD_H_INCLUDED

class CCoord{
    private:
        int X, Y;

    public:
        CCoord(int x = 0, int y = 0):X(x),Y(y){};
        ~CCoord(){};

        int getX(){return X;};
        int getY(){return Y;};
        void setX(int x){X=x;};
        void setY(int y){Y=y;};

};

#endif // CCOORD_H_INCLUDED
