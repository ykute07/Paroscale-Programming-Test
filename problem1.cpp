#include<bits/stdc++.h>
using namespace std;
queue<int> prod;
void producer(int Z)
{
  
  int min = 0;
  int max = 20;
  for (int i = 0; i < Z; i++)
  {
    int randNum = rand()%(max-min + 1) + min;
    prod.push(randNum);  
  }
}
void producer2(int Z)
{
  
  int min = 0;
  int max = 20;
  for (int i = 0; i < Z; i++)
  {
    int randNum = rand()%(max-min + 1) + min;
    prod.push(randNum);  
  }
}
void consumer(){
    while(!prod.empty()){
        cout<<prod.front()<<endl;
        prod.pop();
    }
}

int main()
{
   
  
  thread th1(producer, 2);
  thread th2(producer2, 2);
  th1.join();
  th2.join();
  consumer();
  
}
