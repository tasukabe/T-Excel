using namespace std;

/*This class's functions are use to store the data or command
 which is inputed by user.*/
class DataFunction {
    protected:
        int cln;
        
    public:
        string SD[100];
        string COMMAND;

        float CAns;  //Calculated Answer.
        
        bool H = NULL;
        bool CtoS(int);

        void Reciver();
        void CC(string command);          // command's letter counter.
        void Calculator(float n1, float n2, char o);
        
        void System_P1();   //System_P1 is use for normal work.
        void System_P2();   //System_P2 is use to render the valus and other things.

};

//There all data of user has stored and it has nothing to hide.
class DataStore {

    void friend DataFunction :: System_P1();

    public:
    
};