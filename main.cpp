#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Abstract class for a lecture
class Lecture {
protected:
    string firstName;
    string lastName;

public:
    virtual string getFirstName() = 0;
    virtual void setFirstName(string firstName) = 0;
    virtual string getLastName() = 0;
    virtual void setLastName(string lastName) = 0;
    
Lecture (string firstName, string lastName) {
        this->firstName = firstName;
        this->lastName = lastName;
    };
};

class SkillwillLecturer : public Lecture {
private: 
    int chapter;
    int level;
    
public:

SkillwillLecturer(string firstName, string lastName, int chapter, int level): Lecture(firstName, lastName){
    this->chapter=chapter;
    this->level=level;
}

    string getFirstName()  {
        return firstName;
    }
    void setFirstName(string firstName)  {
        this->firstName = firstName;
    }
    string getLastName()  {
        return lastName;
    }
    void setLastName(string lastName)  {
        this->lastName = lastName;
    }
    int getChapter() {
        return chapter;
    }
    void setChapter(int chapter) {
        this->chapter = chapter;
    }
    int getLevel() {
        return level;
    }
    void setLevel(int level) {
        this->level = level;
    }
    
};


int main()
{
       SkillwillLecturer l= SkillwillLecturer("sopo", "girgvliani", 1,1);

cout<<l.getFirstName()<<endl;
cout<<l.getLastName()<<endl;
cout<<l.getChapter()<<endl;
cout<<l.getLevel()<<endl;

    return 0;
    
    
}
