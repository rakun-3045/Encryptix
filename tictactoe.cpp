#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
using namespace std;

int win(string r1,string r2,string r3){
    if(r1[1]=='X' && r2[1]=='X' && r3[1]=='X'){
        return 1;
    }
    else if(r1[1]=='O' && r2[1]=='O' && r3[1]=='O'){
        return 2;
    }
    else if(r1[5]=='X' && r2[5]=='X' && r3[5]=='X'){
        return 1;
    }
    else if(r1[5]=='O' && r2[5]=='O' && r3[5]=='O'){
        return 2;
    }
    else if(r1[9]=='X' && r2[9]=='X' && r3[9]=='X'){
        return 1;
    }
    else if(r1[9]=='O' && r2[9]=='O' && r3[9]=='O'){
        return 2;
    }
    else if(r1[1]=='X' && r1[5]=='X' && r1[9]=='X'){
        return 1;
    }
    else if(r1[1]=='O' && r1[5]=='O' && r1[9]=='O'){
        return 2;
    }
    else if(r2[1]=='X' && r2[5]=='X' && r2[9]=='X'){
        return 1;
    }
    else if(r2[1]=='O' && r2[5]=='O' && r2[9]=='O'){
        return 2;
    }
    else if(r3[1]=='X' && r3[5]=='X' && r3[9]=='X'){
        return 1;
    }
    else if(r3[1]=='O' && r3[5]=='O' && r3[9]=='O'){
        return 2;
    }
    else if(r1[1]=='X' && r2[5]=='X' && r3[9]=='X'){
        return 1;
    }
    else if(r1[1]=='O' && r2[5]=='O' && r3[9]=='O'){
        return 2;
    }
    else if(r1[9]=='X' && r2[5]=='X' && r3[1]=='X'){
        return 1;
    }
    else if(r1[9]=='O' && r2[5]=='O' && r3[1]=='O'){
        return 2;
    }
}


void game(string a,string b){
        string r1=" 1 | 2 | 3 ";
        string r2=" 4 | 5 | 6 ";
        string r3=" 7 | 8 | 9 ";
        int cnt=0;
        while(win(r1,r2,r3)!=1 && win(r1,r2,r3)!=2 && cnt<9){
            if(cnt%2==0){
                int chance;
                cout<<a<<" enter the position you want to place X at: ";cin>>chance;
                if(chance>0 && chance<4){
                    for(int i=0;i<r1.size();i++){
                        if(r1[i]-'0'==chance){
                            r1[i]='X';
                        }
                    }
                }
                else if(chance>3 && chance<7){
                    for(int i=0;i<r2.size();i++){
                        if(r2[i]-'0'==chance){
                            r2[i]='X';
                        }
                    }
                }
                else if(chance>6 && chance<10){
                    for(int i=0;i<r3.size();i++){
                        if(r3[i]-'0'==chance){
                            r3[i]='X';
                        }
                    }
                }
            }

            else if(cnt%2==1){
                int chance;
                cout<<b<<" enter the position you want to place O at: ";cin>>chance;
                if(chance>0 && chance<4){
                    for(int i=0;i<r1.size();i++){
                        if(r1[i]-'0'==chance){
                            r1[i]='O';
                        }
                    }
                }
                else if(chance>3 && chance<7){
                    for(int i=0;i<r2.size();i++){
                        if(r2[i]-'0'==chance){
                            r2[i]='O';
                        }
                    }
                }
                else if(chance>6 && chance<10){
                    for(int i=0;i<r3.size();i++){
                        if(r3[i]-'0'==chance){
                            r3[i]='O';
                        }
                    }
                }

            }

            cout<<r1<<endl;
            cout<<"---|---|---\n";
            cout<<r2<<endl;
            cout<<"---|---|---\n";
            cout<<r3<<endl;
            cnt++;

        }
        if(win(r1,r2,r3)==1){
            cout<<"Congratulations! "<< a<<" has won the game\n";
        }
        else if(win(r1,r2,r3)==2){
            cout<<"Congratulations! "<<b<<" has won the game\n";
        }
        else{
            cout<<"The game ended in a draw\n";
        }
}


int main(){
    fast_io;
    srand((unsigned)time(NULL));
    char start;
    cout<<"Do you wish to play 2-player Tic-tac-toe? (y/n)";
    cin>>start;cout<<endl;
    while(start=='y' || start=='Y'){
        int u=rand()%2;
        string player1,player2;
        cout<<"Enter name of player1: ";
        cin>>player1;cout<<endl;
        cout<<"Enter name of player2: ";
        cin>>player2;cout<<endl;
        string ini;
        string ini2;
        if(u==1){
            ini=player1;
            ini2=player2;
        }
        else{
            ini=player2;
            ini2=player1;
        }

    cout<<" 1 | 2 | 3 \n";
    cout<<"---|---|---\n";
    cout<<" 4 | 5 | 6 \n";
    cout<<"---|---|---\n";
    cout<<" 7 | 8 | 9 \n";

    cout<<"The game starts with "<<ini<<" playing X"<<endl;    

     game(ini,ini2);
     cout<<"Do you wish continue playing?(y/n)"<<endl;
     cin>>start;cout<<endl;
    
    }
    cout<<"Thanks for playing!!"<<endl;
    return 0;
}