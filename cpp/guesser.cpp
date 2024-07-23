#include <iostream> 
using namespace std;

void compare(int x){
  if (x==7)
  {
    cout<<"Congratulations You guessed the number it was 7 \n\n Thala for a reason\n\n";
  }
  else if (x>7 && x<10)
  {
    cout<<"Wrong guess \nYou are very close try a bit lower";
  } 
  else if (x<7 && x>4)
  {
    cout<<"Wrong guess\nYou are very close try a bit higher";
  } 
  else if (x>10)
  {
    cout<<"Wrong guess\nTry a smaller number";
  } 
  else if (x<4)
  {
    cout<<"Wrong guess\nTry a higher number";
  }
}

int main() {
  int num,input,i;
  num=7;  
  
  for(i=1;i<=3;i++){
    cout << "\n\nGuess the number :";
    cin>>input;
    if (input!=7)
    {
      compare(input);
    }else{
      compare(input);
      return 0;
    }
    
  } 
  cout<<"\n\n\tGame Over";
  return 0;
} 