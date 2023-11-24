#include<iostream>
using namespace std;

class Media{
	public:
		string book_title;
		string book_publisher;
		string video_title;
		string video_publisher;
		virtual void read()=0;
		virtual void show()=0;	
};
class Book:public Media{
	int numpage;
	public:
		void read(){
			cout<<"Enter the Book Title: ";
			cin>>book_title;
			
			cout<<"Enter the Book publisher:";
			cin>>book_publisher;
			
			cout<<"Enter the number of pages:";
			cin>>numpage;
		}
		void show()  {
    cout << "Book Title: " << book_title << endl;
    cout << "Book Publisher: " << book_publisher << endl;
    cout << "Number of Pages: " << numpage << endl;
  }
};
class Tape : public Media {
  int playbacktime;
  string video_name;

public:
  void read(){
    cout << "Enter video title: ";
    cin>>video_title;

    cout << "Enter video publisher: ";
    cin>>video_publisher;

    cout << "Enter video name: ";
    cin>>video_name;

    cout << "Enter playback time: ";
    cin >> playbacktime;
  }

  void show() {
    cout << "Video Title: " << video_title << endl;
    cout << "Video Publisher: " << video_publisher << endl;
    cout << "Video Name: " << video_name << endl;
    cout << "Playback Time: " << playbacktime << endl;
  }
};
int main() {
  Media *media1 = new Book();
  Media *media2 = new Tape();
  int sc;
 do{
		cout<<"1. Press 1 to feed and view Book details."<<endl;
		cout<<"2. Press 2 to feed and view Video details."<<endl;
		cout<<"3. Press 3 to Exit."<<endl;
		cout<<"Enter your choice: ";
		cin>>sc;
		if (sc==3){
			cout<<"You have existed the program!"<<endl;
			break;
		}
		else{
		switch(sc){
		  case 1:{
		    media1->read();
            media1->show();
			  break;}
			  
		  case 2:{
		     media2->read();
             media2->show();
			  break;}
			  
		  default:{
			cout<<"No match found."<<endl;}	
		}
		
	}
}while(sc!=3);
	return 0;
}	
