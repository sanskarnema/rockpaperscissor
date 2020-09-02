#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int rockpaperscissor(string you, string comp){
// return -1 if you lose, return 1 if you win or return 0 if the game is draw
//r = rock , p = paper , s = scissor
//conditions of draw
//rr
//pp
//ss
//rest of the conditions can be
//rp
//pr
//rs
//sr
//ps
//sp


if (you == comp){
    return 0;
} 
else if (you == "rock" && comp =="paper"){
    return -1;
}
else if (you == "paper" && comp == "rock"){
    return 1;
}
else if (you == "rock" && comp =="scissor"){
    return 1;
}
else if (you == "scissor" && comp == "rock"){
    return -1;
}
else if (you == "paper" && comp =="scissor"){
    return -1;
}
else if (you == "scissor" && comp == "paper"){
    return 1;
}


}
int main(){
    
    
    
    string you,comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if (number <= 33){
        comp = "rock";
    }
    else if (number > 33 && number <=66 ){
        comp = "paper";
    }
    else {
        comp = "scissor";
    }
    cout<<"Enter your choice : Rock , Paper or Scissor"<<endl;
    cin>>you;
    int result = rockpaperscissor(you,comp);
    cout<<"Your choice is "<<you<<" and computer's choice is "<<comp<<endl;
    if(result == 0){
        cout<<"Game draw"<<endl;
    }
    else if(result == 1){
        cout<<"You Won"<<endl;

    }
    else{
        cout<<"Computer won"<<endl;

    }
    system("PAUSE");
return 0;
    
}
