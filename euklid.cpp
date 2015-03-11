#include <iostream>
using namespace std;


int nzm(int a, int b){
if(b==0) return a;
else return nzm(b, a%b);
}


int main(){
int polje[3];
for(int i=0; i<3; i++)
cin >> polje[i];
int a=0,b=0;
for(int i=0; i<3; i++){
a=polje[i];
b=nzm(a,b);
}


cout << b << endl;


system("pause");
return 0;
}
