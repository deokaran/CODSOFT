#include <iostream> 
#include <cstdlib>
#include <ctime> 

using namespace std;

void compare(int x,int a){
  if (x==a)
  {
    cout<<"Congratulations You guessed the number";
  }
  else if (x>a && x<a+5)
  {
    cout<<"Wrong guess \nYou are very close try a bit lower";
  } 
  else if (x<a && x>a-5)
  {
    cout<<"Wrong guess\nYou are very close try a bit higher";
  } 
  else if (x>a)
  {
    cout<<"Wrong guess\nTry a smaller number";
  } 
  else if (x<a)
  {
    cout<<"Wrong guess\nTry a higher number";
  }
}

int main() {
  int num,input,i,a;
  
  srand(time(0) );
  a=rand() % 101;
    
  cout<<"\nWelcome to the number guesser game";
 cout<<"\nGuess the number it ranges from 0 to 100";


  for(i=1;i<=3;i++){
    cout << "\n\nGuess the number :";
    cin>>input;
    if (input!=a)
    {
      compare(input,a);
    }else{
      compare(input,a);
      return 0;
    }
    
  } 
  cout<<"\n\n\tGame Over";

cout<<"\nThe number was:"<<a;
  return 0;
} 