#include<iostream>
#include <time.h>
using namespace std;

void layout(char board[][3]){
cout<<"            |   |   "<<endl;
cout<<"          "<<board[0][0]<<" | "<<board[0][1]<<" | "<<' '<<board[0][2]<<' '<<endl;
cout<<"         ___|___|___"<<endl;
cout<<"            |   |   "<<endl;
cout<<"          "<<board[1][0]<<" | "<<board[1][1]<<" | "<<' '<<board[1][2]<<' '<<endl;
cout<<"         ___|___|___"<<endl;
cout<<"            |   |   "<<endl;
cout<<"          "<<board[2][0]<<" | "<<board[2][1]<<" | "<<' '<<board[2][2]<<' '<<endl;
cout<<"            |   |   "<<endl<<endl<<endl;
return;
      }
      void layout1(char board[][3]){
cout<<"   |   |   "<<endl;
cout<<' ';
if(board[0][0]=='X' || board[0][0]=='O'){
cout<<board[0][0];
}
else{
    cout<<' ';
}
cout<<" | ";
if(board[0][1]=='X' || board[0][1]=='O'){
cout<<board[0][1];
}
else{
    cout<<' ';
}
cout<<" | ";
if(board[0][2]=='X' || board[0][2]=='O'){
cout<<' '<<board[0][2];
}
else{
    cout<<' ';
}
cout<<' '<<endl;
cout<<"___|___|___"<<endl;
cout<<"   |   |   "<<endl;
cout<<' ';
if(board[1][0]=='X' || board[1][0]=='O'){
cout<<board[1][0];
}
else{
    cout<<' ';
}
cout<<" | ";
if(board[1][1]=='X' || board[1][1]=='O'){
cout<<board[1][1];
}
else{
    cout<<' ';
}
cout<<" | ";
if(board[1][2]=='X' || board[1][2]=='O'){
cout<<' '<<board[1][2];
}
else{
    cout<<' ';
}
cout<<' '<<endl;
cout<<"___|___|___"<<endl;
cout<<"   |   |   "<<endl;
cout<<' ';
if(board[2][0]=='X' || board[2][0]=='O'){
cout<<board[2][0];
}
else{
    cout<<' ';
}
cout<<" | ";
if(board[2][1]=='X' || board[2][1]=='O'){
cout<<board[2][1];
}
else{
    cout<<' ';
}
cout<<" | ";
if(board[2][2]=='X' || board[2][2]=='O'){
cout<<' '<<board[2][2];
}
else{
    cout<<' ';
}
cout<<' '<<endl;
cout<<"   |   |   "<<endl<<endl<<endl;
return;
      }
      std::pair<int,int> check(char b[][3]){
          for(int i=0;i<3;i++){
      if(b[i][0]==b[i][1] && b[i][2]!='X' && b[i][2]!='O'){
        return std::make_pair(i,2);
      }
      if(b[i][1]==b[i][2] && b[i][0]!='X' && b[i][0]!='O'){
         return std::make_pair(i,0);
      }
      if(b[i][0]==b[i][2] && b[i][1]!='X' && b[i][1]!='O'){
        return std::make_pair(i,1);
      }
          }
          for(int i=0;i<3;i++){
      if(b[0][i]==b[1][i] && b[2][i]!='X' && b[2][i]!='O'){
         return std::make_pair(2,i);
      }
      if(b[1][i]==b[2][i] && b[0][i]!='X' && b[0][i]!='O'){
        return std::make_pair(0,i);
      }
      if(b[0][i]==b[2][i] && b[1][i]!='X' && b[1][i]!='O'){
        return std::make_pair(1,i);
      }
          }
          if(b[0][0]==b[1][1] && b[2][2]!='X' && b[2][2]!='O'){
        return std::make_pair(2,2);
      }
           if(b[2][2]==b[1][1] && b[0][0]!='X' && b[0][0]!='O'){
        return std::make_pair(0,0);
      }
           if(b[0][0]==b[2][2] && b[1][1]!='X' && b[1][1]!='O'){
        return std::make_pair(1,1);
      }
           if(b[0][2]==b[1][1] && b[2][0]!='X' && b[2][0]!='O'){
       return std::make_pair(2,0);
      }
               if(b[2][0]==b[1][1] && b[0][2]!='X' && b[0][2]!='O'){
        return std::make_pair(0,2);
      }
           if(b[2][0]==b[0][2] && b[1][1]!='X' && b[1][1]!='O'){
        return std::make_pair(1,1);
      }
      return std::make_pair(404,404);
      }
    int index1(char a, char b[][3]){
    if(a=='1'){
        return 0;
    }
    if(a=='2'){
        return 0;
    }
    if(a=='3'){
        return 0;
    }
      if(a=='4'){
        return 1;
    }
    if(a=='5'){
        return 1;
    }
    if(a=='6'){
        return 1;
    }
      if(a=='7'){
        return 2;
    }
    if(a=='8'){
        return 2;
    }
    if(a=='9'){
        return 2;
    }
    return 404;
    }
     int index2(char a, char b[][3]){
    if(a=='1'){
        return 0;
    }
    if(a=='2'){
        return 1;
    }
    if(a=='3'){
        return 2;
    }
      if(a=='4'){
        return 0;
    }
    if(a=='5'){
        return 1;
    }
    if(a=='6'){
        return 2;
    }
      if(a=='7'){
        return 0;
    }
    if(a=='8'){
        return 1;
    }
    if(a=='9'){
        return 2;
    }
    return 404;
    }
bool valid(char a, char b[][3]){
   char n=b[index1(a,b)][index2(a,b)];
   cout<<endl<<endl;
   if(n!=a){
    return false;
   }
   return true;
      }
bool win(char b[][3]){
       for(int i=0;i<3;i++){
      if(b[0][i]==b[1][i] && b[0][i]==b[2][i]){
        return true;
      }
}
       for(int i=0;i<3;i++){
      if(b[i][0]==b[i][1] && b[i][0]==b[i][2]){
        return true;
      }
}
if(b[0][0]==b[1][1] && b[0][0]==b[2][2]){
        return true;
      }
  if(b[0][2]==b[1][1] && b[0][2]==b[2][0]){
        return true;
      }
return false;
}
int main(){
    cout<<"\t TIC-TAC-TOE"<<endl;
char board[3][3];
board[0][0]='1';
board[0][1]='2';
board[0][2]='3';
board[1][0]='4';
board[1][1]='5';
board[1][2]='6';
board[2][0]='7';
board[2][1]='8';
board[2][2]='9';
cout<<endl<<"press 1 for Single Player"<<endl<<"press 2 for Two Players"<<endl;
int n;
cin>>n;
cout<<endl;

char a;
int e=0;
if(n==1){
        layout(board);
        srand(time(NULL));
while(win(board)==0){
        cout<<"\t\t SINGLE PLAYER"<<endl<<endl;
         cout<<"Player  :- Where to Place -> ";
    cin>>a;
    while(valid(a,board)==0){
        cout<<"There is an element already there choose another one -> ";
        cin>>a;
     }
     board[index1(a,board)][index2(a,board)]='X';
     layout1(board);
     e++;
     cout<<endl;
if(win(board)==1){
    cout<<"Player  WINSSS";
    break;
}
if(e==9){
    break;
}
 pair<int, int> p =check(board);
 if(p.first!=404){
      board[p.first][p.second]='O';
 }
 else{
    int a=(rand()%9);
char r=a+'0';
while(valid(r,board)==0){
      a=(rand()%9);
     r=a+'0';
     }
     board[index1(r,board)][index2(r,board)]='O';
 }
 layout1(board);
     e++;
     cout<<endl;
if(win(board)==1){
    cout<<"Computer  WINSSS";
    break;
}
if(e==9){
    break;
}

    }

}

if(n==2){
        cout<<"         2 Players"<<endl<<endl<<endl;
        layout(board);
        while(win(board)==0){
    cout<<"Player 1 :- Where to Place -> ";
    cin>>a;
    while(valid(a,board)==0){
        cout<<"There is an element already there choose another one -> ";
        cin>>a;
     }
     board[index1(a,board)][index2(a,board)]='X';
     layout1(board);
     e++;
     cout<<endl;
if(win(board)==1){
    cout<<"Player 1 WINSSS";
    break;
}
if(e==9){
    break;
}
cout<<"Player 2 :- Where to Place -> ";
    cin>>a;
    while(valid(a,board)==0){
        cout<<"There is an element already there choose another one -> ";
        cin>>a;
     }
     board[index1(a,board)][index2(a,board)]='O';
       layout1(board);
       e++;
     cout<<endl;
   if(win(board)==1){
    cout<<"         Player 2 WINSSS";
}
if(e==9){
    break;
}
  }
}
   if(win(board)==0){
    cout<<"         IT's A DRAWW";
}
int j;
cout<<endl<<"Would you like to Play again??\n\tPress 1 if yes \n\tPress 2 if no\n";
cin>>j;
if(j==1){
        system("CLS");
    main();
}

return 0;
}
