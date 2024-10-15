#include <iostream>
int main(){
    unsigned int i = 1;
    unsigned  j = 5;
    float pr =0;
    float pi =0;
    float zr=0;
    float zi =0;
    float mod =0;
    std:: cout<<"veuillez entrer la partie reelle de C:\n";
    std:: cin>>pr;
    std:: cout<<"veuillez entrer la partie imaginaire de C:\n";
    std:: cin>>pi;
    for (i=1; i<=j; i++){
        zr = zr*zr-(zi*zi)+pr;
        zi = 2*zr*zi + pi;
        std:: cout<<"\n("<<zr<<";"<<zi<<")";
        if (zr *zr +zi *zi 
            std:: cout<<"\nle point represente par le nombre" <<zr<<"+" <<(zi)<<"i  n'appartient pas a la fractale de Mandelbrot\n";
            break;
        }
    }
}