#include<bits/stdc++.h>
using namespace std;

///Tested inputs:
///E->ABCd|ABC|ABCEF
///E->ABCd|ABCK|ABCEF
///A->def|defgh|dfa
///X->abc|def

int main(){
    int i,j,mn=1e9;
    string String;
    puts("Input a Grammar like E->ABCd|ABC|ABCEF\n");
    cin>>String;
    String+='|';
    char NonTerminal=String[0];
    vector<string> States;

    ///Separate the states.
    for (i=3; i<String.size(); i++){
        string sate="";
        while(String[i]!='|')
            sate+=String[i], i++;

        States.push_back(sate);
        mn=min(mn,int(sate.size()));
    }

    ///Find Common string
    int Common,f=false;
    for (Common=0; Common<mn; Common++){
        char c=States[0][Common];
        for (j=0; j<States.size(); j++){
            if (States[j][Common]!=c){
                f=true;
                break;
            }
        }
        if (f==true) break;
    }
    Common--;
    if (Common==-1) puts("Left factor is impossible for this grammar");
    else{
        printf("%c->",NonTerminal);
        for (i=0; i<=Common; i++)
            printf("%c",States[0][i]);
        printf("%c'\n",NonTerminal);

        printf("%c'->",NonTerminal);
        for (i=0; i<States.size(); i++){
            for (j=Common+1; j<States[i].size(); j++)
                printf("%c",States[i][j]);
            if (States[i].size()!=Common+1)
                printf("|");
        }
        puts("epsilon");
    }
    return 0;
}
