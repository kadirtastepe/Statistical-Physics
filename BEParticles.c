//This program calculates statistical weigths of Maxwell-Boltzmann and Bose-Einstein distributions.

#include<iostream>
#include<math.h>

int main(){

double x;
std::cout<<"Defined Total Number of Particles: 3,4,5,6,7,8,9,10"<<std::endl;
int n_i = 0; //Range of Particle Numbers 
int n_f; //Total Number of Particles
int g_i; //Degeneracy Number
int t_e; //total energy 

std::cout<<"Total Number of Particles:"; std::cin>>n_f;
std::cout<<"Total Amount of Energy:"; std::cin>>t_e;
std::cout<<"Degeneracy number:"; std::cin>> g_i;

int n=n_f;


double w_MB; //Maxwell-Boltzmann Statistical Weight 
double w_BE; //Bose-Einstein Statistical Weight

double w_sMB[100], w_sBE[100], as[100],bs[100],cs[100],ds[100],es[100],fs[100],gs[100],hs[100],js[100],ks[100]; //stored values


int k1 = -1; //counter 


//Generating Particle Distribution Table
//[a,b,c,d,e,f,g,h,j]->Indistinguishable particles
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(n==3){
std::cout<<"0E,"<<"1E,"<<"2E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){


x = a*0+b*1+c*2;

if(x==t_e){
if(a+b+c==t_e){


w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i)));



k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c;  
 
std::cout<<a<<", "<<b<<", "<<c<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}


}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(n==4){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){


x = a*0+b*1+c*2+d*3;

if(x==t_e){
if(a+b+c+d==t_e){


w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i)));



k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; 
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}


}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(n==5){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E,"<<"4E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){
for(int e=n_i;e<=n_f;e++){


x = a*0+b*1+c*2+d*3+e*4;

if(x==t_e){
if(a+b+c+d+e==t_e){


w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1))*(pow(g_i,e)/tgamma(e+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i))) * (tgamma(g_i+e)/(tgamma(e+1)*tgamma(g_i)));



k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; es[k1]=e;  
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}}


}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(n==6){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E,"<<"4E,"<<"5E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){
for(int e=n_i;e<=n_f;e++){
for(int f=n_i;f<=n_f;f++){

x = a*0+b*1+c*2+d*3+e*4+f*5;

if(x==t_e){
if(a+b+c+d+e+f==t_e){


w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1))*(pow(g_i,e)/tgamma(e+1))*(pow(g_i,f)/tgamma(f+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i))) * (tgamma(g_i+e)/(tgamma(e+1)*tgamma(g_i))) * (tgamma(g_i+f)/(tgamma(f+1)*tgamma(g_i)));



k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; es[k1]=e; fs[k1]=f; 
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<", "<<f<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}}}


}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(n==7){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E,"<<"4E,"<<"5E,"<<"6E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){
for(int e=n_i;e<=n_f;e++){
for(int f=n_i;f<=n_f;f++){
for(int g=n_i;g<=n_f;g++){

x = a*0+b*1+c*2+d*3+e*4+f*5+g*6;

if(x==t_e){
if(a+b+c+d+e+f+g==t_e){


w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1))*(pow(g_i,e)/tgamma(e+1))*(pow(g_i,f)/tgamma(f+1))*(pow(g_i,g)/tgamma(g+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i))) * (tgamma(g_i+e)/(tgamma(e+1)*tgamma(g_i))) * (tgamma(g_i+f)/(tgamma(f+1)*tgamma(g_i))) * (tgamma(g_i+g)/(tgamma(g+1)*tgamma(g_i)));




k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; es[k1]=e; fs[k1]=f; gs[k1]=g; 
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<", "<<f<<", "<<g<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}}}}}







////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


if(n==8){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E,"<<"4E,"<<"5E,"<<"6E,"<<"7E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){
for(int e=n_i;e<=n_f;e++){
for(int f=n_i;f<=n_f;f++){
for(int g=n_i;g<=n_f;g++){
for(int h=n_i;h<=n_f;h++){

x = a*0+b*1+c*2+d*3+e*4+f*5+g*6+h*7;

if(x==t_e){
if(a+b+c+d+e+f+g+h==t_e){



w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1))*(pow(g_i,e)/tgamma(e+1))*(pow(g_i,f)/tgamma(f+1))*(pow(g_i,g)/tgamma(g+1))*(pow(g_i,h)/tgamma(h+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i))) * (tgamma(g_i+e)/(tgamma(e+1)*tgamma(g_i))) * (tgamma(g_i+f)/(tgamma(f+1)*tgamma(g_i))) * (tgamma(g_i+g)/(tgamma(g+1)*tgamma(g_i))) * (tgamma(g_i+h)/(tgamma(h+1)*tgamma(g_i)));




k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; es[k1]=e; fs[k1]=f; gs[k1]=g; hs[k1]=h; 
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<", "<<f<<", "<<g<<", "<<h<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}}}}}


}






////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if(n==9){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E,"<<"4E,"<<"5E,"<<"6E,"<<"7E,"<<"8E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){
for(int e=n_i;e<=n_f;e++){
for(int f=n_i;f<=n_f;f++){
for(int g=n_i;g<=n_f;g++){
for(int h=n_i;h<=n_f;h++){
for(int j=n_i;j<=n_f;j++){

x = a*0+b*1+c*2+d*3+e*4+f*5+g*6+h*7+j*8;

if(x==t_e){
if(a+b+c+d+e+f+g+h+j==t_e){



w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1))*(pow(g_i,e)/tgamma(e+1))*(pow(g_i,f)/tgamma(f+1))*(pow(g_i,g)/tgamma(g+1))*(pow(g_i,h)/tgamma(h+1))*(pow(g_i,j)/tgamma(j+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i))) * (tgamma(g_i+e)/(tgamma(e+1)*tgamma(g_i))) * (tgamma(g_i+f)/(tgamma(f+1)*tgamma(g_i))) * (tgamma(g_i+g)/(tgamma(g+1)*tgamma(g_i))) * (tgamma(g_i+h)/(tgamma(h+1)*tgamma(g_i))) * (tgamma(g_i+j)/(tgamma(j+1)*tgamma(g_i)));




k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; es[k1]=e; fs[k1]=f; gs[k1]=g; hs[k1]=h; js[k1]=j;
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<", "<<f<<", "<<g<<", "<<h<<", "<<j<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}}}}}}



}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




if(n==10){
std::cout<<"0E,"<<"1E,"<<"2E,"<<"3E,"<<"4E,"<<"5E,"<<"6E,"<<"7E,"<<"8E"<<"9E"<<std::endl;
for(int a=n_i;a<=n_f;a++){
for(int b=n_i;b<=n_f;b++){
for(int c=n_i;c<=n_f;c++){
for(int d=n_i;d<=n_f;d++){
for(int e=n_i;e<=n_f;e++){
for(int f=n_i;f<=n_f;f++){
for(int g=n_i;g<=n_f;g++){
for(int h=n_i;h<=n_f;h++){
for(int j=n_i;j<=n_f;j++){
for(int k=n_i;k<=n_f;k++){

x = a*0+b*1+c*2+d*3+e*4+f*5+g*6+h*7+j*8+k*9;

if(x==t_e){
if(a+b+c+d+e+f+g+h+j+k==t_e){



w_MB = tgamma(n_f+1) * (pow(g_i,a)/tgamma(a+1))*(pow(g_i,b)/tgamma(b+1))*(pow(g_i,c)/tgamma(c+1))*(pow(g_i,d)/tgamma(d+1))*(pow(g_i,e)/tgamma(e+1))*(pow(g_i,f)/tgamma(f+1))*(pow(g_i,g)/tgamma(g+1))*(pow(g_i,h)/tgamma(h+1))*(pow(g_i,j)/tgamma(j+1))*(pow(g_i,k)/tgamma(k+1));

w_BE=(tgamma(g_i+a)/(tgamma(a+1)*tgamma(g_i))) * (tgamma(g_i+b)/(tgamma(b+1)*tgamma(g_i))) * (tgamma(g_i+c)/(tgamma(c+1)*tgamma(g_i))) * (tgamma(g_i+d)/(tgamma(d+1)*tgamma(g_i))) * (tgamma(g_i+e)/(tgamma(e+1)*tgamma(g_i))) * (tgamma(g_i+f)/(tgamma(f+1)*tgamma(g_i))) * (tgamma(g_i+g)/(tgamma(g+1)*tgamma(g_i))) * (tgamma(g_i+h)/(tgamma(h+1)*tgamma(g_i))) * (tgamma(g_i+j)/(tgamma(j+1)*tgamma(g_i)))* (tgamma(g_i+k)/(tgamma(k+1)*tgamma(g_i)));




k1=k1+1;
w_sMB[k1]=w_MB;
w_sBE[k1]=w_BE;
as[k1]=a; bs[k1]=b; cs[k1]=c; ds[k1]=d; es[k1]=e; fs[k1]=f; gs[k1]=g; hs[k1]=h; js[k1]=j; ks[k1]=k;
 
std::cout<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<", "<<f<<", "<<g<<", "<<h<<", "<<j<<", "<<k<<" <-> \u03A9(MB) = "<< w_MB<<" , " << "   \u03A9(BE) = "<< w_BE << std::endl;



}
}



}}}}}}}}}}



}




//Total statistical weights
double w_total_MB = 0;
double w_total_BE = 0;

for(int i = 0; i<40;i++){
w_total_MB+=w_sMB[i];
w_total_BE+=w_sBE[i];


}

std::cout<<"\u03A9(MB)_total = "<<w_total_MB<<", \u03A9(BE)_total = "<<w_total_BE<<"\n\n" << std::endl;
std::cout<<"BE CAREFUL WITH ENERGY STATES! \n\n"<<std::endl;


//Compute Average Number of Particles in a Energy State
double n0_MB=0; double n0_BE=0;
double n1_MB=0; double n1_BE=0;
double n2_MB=0; double n2_BE=0;
double n3_MB=0; double n3_BE=0;
double n4_MB=0; double n4_BE=0;
double n5_MB=0; double n5_BE=0;
double n6_MB=0; double n6_BE=0;
double n7_MB=0; double n7_BE=0;
double n8_MB=0; double n8_BE=0;
double n9_MB=0; double n9_BE=0;

for(int i=0; i<40; i++){

n0_MB+=as[i]*w_sMB[i]/w_total_MB;
n1_MB+=bs[i]*w_sMB[i]/w_total_MB;
n2_MB+=cs[i]*w_sMB[i]/w_total_MB;
n3_MB+=ds[i]*w_sMB[i]/w_total_MB;
n4_MB+=es[i]*w_sMB[i]/w_total_MB;
n5_MB+=fs[i]*w_sMB[i]/w_total_MB;
n6_MB+=gs[i]*w_sMB[i]/w_total_MB;
n7_MB+=hs[i]*w_sMB[i]/w_total_MB;
n8_MB+=js[i]*w_sMB[i]/w_total_MB;
n9_MB+=ks[i]*w_sMB[i]/w_total_MB;

n0_BE+=as[i]*w_sBE[i]/w_total_BE;
n1_BE+=bs[i]*w_sBE[i]/w_total_BE;
n2_BE+=cs[i]*w_sBE[i]/w_total_BE;
n3_BE+=ds[i]*w_sBE[i]/w_total_BE;
n4_BE+=es[i]*w_sBE[i]/w_total_BE;
n5_BE+=fs[i]*w_sBE[i]/w_total_BE;
n6_BE+=gs[i]*w_sBE[i]/w_total_BE;
n7_BE+=hs[i]*w_sBE[i]/w_total_BE;
n8_BE+=js[i]*w_sBE[i]/w_total_BE;
n9_BE+=ks[i]*w_sBE[i]/w_total_BE;


}

std::cout << "Average Number of Particles in nth Energy State" <<std::endl;
std::cout << "n0_MB = "<< n0_MB<< "\t\t n0_BE = " << n0_BE <<std::endl;
std::cout << "n1_MB = "<< n1_MB<< "\t\t n1_BE = " << n1_BE <<std::endl;
std::cout << "n2_MB = "<< n2_MB<< "\t\t n2_BE = " << n2_BE <<std::endl;
std::cout << "n3_MB = "<< n3_MB<< "\t\t n3_BE = " << n3_BE <<std::endl;
std::cout << "n4_MB = "<< n4_MB<< "\t\t n4_BE = " << n4_BE <<std::endl;
std::cout << "n5_MB = "<< n5_MB<< "\t\t n5_BE = " << n5_BE <<std::endl;
std::cout << "n6_MB = "<< n6_MB<< "\t\t n6_BE = " << n6_BE <<std::endl;
std::cout << "n7_MB = "<< n7_MB<< "\t\t n7_BE = " << n7_BE <<std::endl;
std::cout << "n8_MB = "<< n8_MB<< "\t\t n8_BE = " << n8_BE <<std::endl;
std::cout << "n9_MB = "<< n9_MB<< "\t\t n9_BE = " << n9_BE <<std::endl;











return 0;

}
