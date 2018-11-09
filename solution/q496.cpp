/**

Your object will be instantiated and called as such:
ToyFactory* tf = new ToyFactory();
Toy* toy = tf->getToy(type);
toy->talk();
*/
class Toy {
public:
virtual void talk() const=0;
};
class Dog: public Toy {
// Write your code here
public :
virtual void talk()const
{
cout<<"Wow"<<endl;
}
};

class Cat: public Toy {
// Write your code here
public :

    virtual void talk()const
{
    cout<<"Meow"<<endl;
}
};

class ToyFactory {
public:
/**
* @param type a string
* @return Get object of the type
/
Toy getToy(string& type) {
// Write your code here
if(type == "Cat")
{
return new Cat();

    }
    if(type == "Dog")
    {
        Toy* p = new Dog();
        return p;
    }
    return NULL;
}
};
