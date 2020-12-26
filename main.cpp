#include<iostream>
using namespace std;

void f1();

class shape{
public:
    virtual double masahat ()=0;
    virtual double mohit ()=0;
};
class chaharZeli{
public:
    double tol;
    double arz;
    chaharZeli(void){//input func
        cout <<"tol mostatil ra vared konid:";
        cin >> tol;
        cout << endl;
        cout << "arz mostatil ra vared konid:";
        cin >> arz;
        cout << endl;
        if(tol<0)
            tol = tol * (-1);
        if(arz<0)
            arz = arz * (-1);
    }
};
class mostatil : public chaharZeli,public shape{
private:
    double M,A;
public:
    double masahat(void){
        M=tol * arz;
        return M;
    }
    double mohit (void){
        A = 2 * (tol +arz);
        return A;
    }
    void print(void){
        cout<< "masahat mostatil: "<< M << endl;
        cout<< "mohit motatil: "<< A << endl;
    }
};

class dayere : public shape{
public:
    double r,M,A;
    dayere(void){//input func
        double R;
        cout << "shao dayere ra vared konid:";
        cin >> R;
        cout << endl;
        if(R<0)
            R=-1*(R);
        r=R;
    }
    double masahat(void){
        M = r * r * 3.14;
        return M;
    }
    double mohit(void){
        A = 2* r * 3.14;
        return A;
    }
    void print(void){
        cout << "masahat dayere:" << M << endl;
        cout << "mohit dayere:" << A << endl;
    }
};

class shape3D{
    virtual void hajm(){}
};

class kore : public shape3D, public dayere{
public:
    double V,S;
    void hajm(void){
        V= 4/3 * (3.14 * r * r * r);
    }
    double masahat(void){
        S = 4 * 3.14 * r * r;
        return S;
    }
    void print(void){
        cout << "hajm kore :"<< V << endl;
        cout << "masahat kore :"<< S << endl;
    }
};

class mokaab : public shape3D, public mostatil{
private:
    double h,V;
public:
    mokaab(void){//input fun
        cout << "ertefa mokaab ravared konid";
        cin>> h;
        cout << endl;
        if(h < 0)
            h = h * (-1);
    }
    void hajm(void){
        V = h * tol * arz;
    }
    void print(void){
        cout << "hajm mokaab :" << V << endl;
    }
};

int main()
{
    f1();
    return 0;
}
void f1(){
    shape *a, *d;
    mostatil p;
    a = &p;
    a->masahat();
    a->mohit();
    p.print();
    dayere d1;
    d = &d1;
    d->masahat();
    d->mohit();
    d1.print();
    kore k1;
    k1.masahat();
    k1.hajm();
    k1.print();
    mokaab k2;
    k2.hajm();
    k2.print();

}












