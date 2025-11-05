#include<bits/stdc++.h>
using namespace std;
class library{
private:
	int isbn;
	int copiesavail;
public:
	string title;
	string author;	
	void enter(string t,string a,int i,int c)
	{
		title = t;
		author = a;
		setisbn(i);
		setcopiesavail(c);
	}
	void setisbn(int i)
	{
		isbn = i;
	}
	void setcopiesavail(int c)
	{
		copiesavail = c;
	}
	void issuebook()
	{
		if(copiesavail < 0) return;
		copiesavail--;
	}
	void addcopies(int n)
	{
		copiesavail+=n;
	}
	int getisbn()
	{
		return isbn;
	}
	int getcopiesavail()
	{
		return copiesavail;
	}
	void display()
	{
		cout << title << "\n";
		cout << author << "\n";
		cout << getisbn() << "\n";
		cout << getcopiesavail() << "\n";
	}
};
int main()
{
	library l1;
	l1.enter("Never","Harsha",209,123);
	l1.display();
	l1.issuebook();
	l1.display();
}
