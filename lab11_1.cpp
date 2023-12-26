#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
string grade(){
    int x;
    x = 1+rand()%9;
    if(x == 1){
        return "A";
    }else if(x == 2){
        return "B+";
    }else if(x == 3){
        return "B";
    }else if(x == 4){
        return "C+";
    }else if(x == 5){
        return "C";
    }else if(x == 6){
        return "D+";
    }else if(x == 7){
        return "D";
    }else if(x == 8){
        return "F";
    }else{
        return "W";
    }
}        

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade() << " in this 261102.";
    return 0;
    }