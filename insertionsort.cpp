#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class student{
	private:
		int score[5];
	public:
		void insert(){
			
			cout<<"enter a number \n";
			
			for(int i=0;i<5;i++)
			{
				cin>>score[i];
			}
		}
		
		
		
		
		void insertion_sort(){
			int temp,in,out;
			for(out=1;out<5;out++)
			{
				temp=score[out];
				in=out;
			while(in>0 && score[in-1]>temp){
					score[in]=score[in-1];
					in=in-1;//in--
				}
				
				score[in]=temp;
				
			}
			
			
			
		}
		
		void display(){
			for(int i=0;i<5;i++){
				cout<<score[i]<<",";
			}
		}
};

int main() {
	student s1;
	s1.insert();
	s1.display();
	s1.insertion_sort();
	s1.display();
}