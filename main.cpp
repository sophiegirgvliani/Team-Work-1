#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Abstract class for a subject
class AbstractSubject{
    protected:
        string SubjectName;
        string BeginTime;
        int Duration;
    public:
        AbstractSubject(string SubjectName, string BegintTime, int Duration){
            this ->SubjectName=SubjectName;
            this ->BeginTime=BeginTime;
            this ->Duration=Duration;
        };
        
        virtual void Subject(){};
        
        string getSubjectName(){
            return SubjectName;
        };
        void setSubjectName(string SubjectName){
            this ->SubjectName=SubjectName;
        };
        
        string getBeginTime(){
            return BeginTime;
        };
        void setBeginTime(string BeginTime){
            this ->BeginTime=BeginTime;
        };
        
        int getDuration(){
            return Duration;
        };
        void setDuration(int Duration){
            this ->Duration=Duration;
        };
};

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

// Abstract class for a Student
class AbstractStudent{
    protected:
        string FirstName;
        string LastName;
        int Age;
        string SubjectName;
    
    public:
        static int StudentCount;
        
        AbstractStudent(string FirstName, string LastName, int Age, string SubjectName){
            this ->FirstName=FirstName;
            this ->LastName=LastName;
            this ->Age=Age;
            this ->SubjectName=SubjectName;
            StudentCount++;
        }
        
        string getFirstName(){
            return FirstName;
        };
        void setFirstName(string FirstName){
            this -> FirstName=FirstName;
        };
        
        string getLastName(){
            return LastName;
        };
        void setLastName(string LastName){
            this -> LastName=LastName;
        };
        
        int getAge(){
            return Age;
        };
        void setAge(int Age){
            this -> Age=Age;
        };
        
        string getSubjectName(){
            return SubjectName;
        };
        void setSubjectName(string SubjectName){
            this -> SubjectName=SubjectName;
        };
        virtual void Student(){};
        
};

int AbstractStudent::StudentCount = 0;

// SkillWillSubject Class
class skillWillSubject: AbstractSubject{
        string Last_Lecture_Title;
    public:
        skillWillSubject(string SubjectName, string BeginTime, int Duration, string Last_Lecture_Title):
        AbstractSubject(SubjectName,BeginTime,Duration){
            this ->Last_Lecture_Title=Last_Lecture_Title;
        };
        
        string getLast_Lecture_Title(){
            return Last_Lecture_Title;
        };
        void setLast_Lecture_Title(string Last_Lecture_Title){
            this -> Last_Lecture_Title=Last_Lecture_Title;
        };
    
};


// SkillWillStudent Class
class skillWillStudent:AbstractStudent{
        string Course;
        string Section;
        float Quiz_Score;
    
    public:
        skillWillStudent(string FirstName, string LastName, int Age, string Course, string Section, float Quiz_Score):
        AbstractStudent(FirstName,LastName,Age,SubjectName){
            this -> Course=Course;
            this -> Section=Section;
            this -> Quiz_Score=Quiz_Score;
        }
        
        string getCourse(){
            return Course;
        };
        void setCourse(string Course){
            this -> Course=Course;
        };
        
        string getSection(){
            return Section;
        };
        void setSection(string Section){
            this -> Section=Section;
        };
        
        float getQuiz_Score(){
            return Quiz_Score;
        };
        void setQuiz_Score(float Quiz_Score){
            this -> Quiz_Score=Quiz_Score;
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
