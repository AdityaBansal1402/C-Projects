#include<iostream>
#include <time.h>
using namespace std;
void layout(char m[][20]){
cout<<"######################"<<endl;
for(int j=0;j<10;j++){
cout<<'#';
for(int i=0;i<20;i++){
    cout<<m[j][i];
}
cout<<'#'<<endl;
}
cout<<"######################"<<endl<<endl;
return;
}
int main(){
char maps[10][20];
for(int j=0;j<10;j++){
    for(int i=0;i<20;i++){
        maps[j][i]=' ';
    }
}
layout(maps);
return 0;
}
