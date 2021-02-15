// cppOOPTutorial.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>


class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};


// creating a class
class Employee:AbstractEmployee {
private:
	
	// encapsulated properties
	std::string Name;
	std::string Company;
	int Age;

public: // access moidifier --> private / protected / public

	// some function for accessing class variables

	// setter function
	void setName(std::string name) {
		Name = name;
	}

	// getter function
	std::string getName() {
		return Name;
	}

	// a little function (behavior)
	void IntroduceYourself() {
		std::cout << "My Name is " << Name << std::endl;
		std::cout << "I work for " << Company << std::endl;
		std::cout << "I'm age " << Age << std::endl;
	}

	void AskForPromotion() {
		if (Age > 30)
			std::cout << Name << "get promoted!" << std::endl;
	}

	// creating a custom constructor
	Employee(std::string name, std::string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
};

int main()
{

	// constructing two objects of the employee class by hand
	
	// Object 1 "Erik"
    std::cout << "Hello World!\n";
	Employee employee1("Erik", "AVL", 31); // short term for calling the class constructor
	employee1.IntroduceYourself();

	// Object 2 "John"
	std::cout << "Hello World!\n";
	Employee employee2 = Employee("John", "Amazon", 33); 
	employee2.IntroduceYourself();

	employee2.setName("John Doe");
	employee2.IntroduceYourself();
}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
