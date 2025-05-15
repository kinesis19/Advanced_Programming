    #include <iostream>
    #include <string>
    #include <vector>

    using namespace std;

    class Person {
    public:
        int _age;

        Person(int age) : _age(age){

        }

        // 배운 내용 중 가상 함수를 사용해서 구현을 시도해 봄
        virtual string Job() = 0;

        virtual void Eat(){
            cout << "Eat" << endl;
        }

        virtual void Talk(){
            cout << "Talk" << endl;
        }

        virtual void Run(){
            cout << "Run" << endl;
        }

        virtual ~Person() {

        }
    };


    class Professor : public Person{
    public:
        Professor(int age) : Person(age) {

        }

        string Job() override{
            return "professor";
        }

        void Teach(){
            cout << "Teach" << endl;
        }
    };

    class TennisPlayer : public Person{
    public:
        TennisPlayer(int age) : Person(age){

        }

        string Job() override{
            return "tennis player";
        }

        void PlayTennis(){
            cout << "PlayTennis" << endl;
        }
    };

    class Businessman : public Person{
    public:
        Businessman(int age) : Person(age){

        }

        string Job() override{
            return "Businessman";
        }

        void RunBusiness(){
            cout << "RunBusiness" << endl;
        }
    };

    int main()
    {
        Professor prof(30);
        cout << "Job : " << prof.Job() << endl;
        cout << "Age : " << prof._age << endl;
        prof.Eat();
        prof.Talk();
        prof.Run();
        prof.Teach();

        cout << endl;

        TennisPlayer player(24);
        cout << "Job : " << player.Job() << endl;
        cout << "Age : " << player._age << endl;

        player.Eat();
        player.Talk();
        player.Run();
        player.PlayTennis();

        cout << endl;

        return 0;
    }
