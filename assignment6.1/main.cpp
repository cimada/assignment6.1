#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string firstName;
	string lastName;

	void Print()
	{
		cout << firstName << " " << lastName << endl;
	}
};

class Contact : public Person
{
public:
	class Address
	{
	public:
		string street;
		string city;
		string state;
		string zip;

		void print()
		{
			cout << street << endl;
			cout << city << ", " << state << endl;
			cout << zip << endl;
		}
	};

	Address contactAddress;

	void printLabel()
	{
		Print();
		contactAddress.print();
		cout << endl;
	}
};

class BusinessContact : public Contact
{
public:
	string business;

	void printFullLabel()
	{
		cout << business << endl;
		Contact:printLabel();
	}
};

int main()
{
	int h = 0;
	int i = 0;
	const int j = 5;

	 BusinessContact listOfContacts[j];

	listOfContacts[0].business = "madHive";
	listOfContacts[0].firstName = "Tyler";
	listOfContacts[0].lastName = "Mace";
	listOfContacts[0].contactAddress.street = "123 Main St";
	listOfContacts[0].contactAddress.city = "Layton";
	listOfContacts[0].contactAddress.state = "UT";
	listOfContacts[0].contactAddress.zip = "84041";

	listOfContacts[1].business = "United SPACER Command";
	listOfContacts[1].firstName = "Clinten";
	listOfContacts[1].lastName = "Imada";
	listOfContacts[1].contactAddress.street = "4000 N Neil Armstrong Ln";
	listOfContacts[1].contactAddress.city = "Aldrinville";
	listOfContacts[1].contactAddress.state = "MON";
	listOfContacts[1].contactAddress.zip = "05796-1";

	listOfContacts[2].business = "This Old House";
	listOfContacts[2].firstName = "Bob";
	listOfContacts[2].lastName = "Villa";
	listOfContacts[2].contactAddress.street = "50 Serenity Rd";
	listOfContacts[2].contactAddress.city = "Baghdad";
	listOfContacts[2].contactAddress.state = "IRQ";
	listOfContacts[2].contactAddress.zip = "APO 45663";

	listOfContacts[3].business = "3rd Street Saints";
	listOfContacts[3].firstName = "Johnny";
	listOfContacts[3].lastName = "Gat";
	listOfContacts[3].contactAddress.street = "314 Pi Circle";
	listOfContacts[3].contactAddress.city = "Santa Barbara";
	listOfContacts[3].contactAddress.state = "CA";
	listOfContacts[3].contactAddress.zip = "93101";

	listOfContacts[4].business = "Grove Street Families";
	listOfContacts[4].firstName = "Carl";
	listOfContacts[4].lastName = "Johnson";
	listOfContacts[4].contactAddress.street = "187 Grove St";
	listOfContacts[4].contactAddress.city = "Ganton";
	listOfContacts[4].contactAddress.state = "LS";
	listOfContacts[4].contactAddress.zip = "55555";

	while (h < j)
	{
		listOfContacts[h].printLabel();
		h++;
	}
	
	while (i < j)
	{
		listOfContacts[i].printFullLabel();
		i++;
	}

	system("pause");

	return 0;
}
