#include <string>
using namespace std;

class Messager{
protected:
     MessagerImp* messagerImp;//...
public:   //业务抽象
    Messager(MessagerImp* mImp) : messagerImp(mImp) {}
    virtual void Login(string username, string password)=0; 
    virtual void SendMessage(string message)=0;
    virtual void SendPicture(Image image)=0;
    
    virtual ~Messager(){}
};

class MessagerImp{  //抽象平台
public:  //平台实现基类
    virtual void PlaySound()=0;
    virtual void DrawShape()=0;
    virtual void WriteText()=0;
    virtual void Connect()=0;
    
    virtual ~MessagerImp(){}
};


//具体平台实现 n
class PCMessagerImp : public MessagerImp{
public:
    
    virtual void PlaySound(){
        //**********
    }
    virtual void DrawShape(){
        //**********
    }
    virtual void WriteText(){
        //**********
    }
    virtual void Connect(){
        //**********
    }
};

class MobileMessagerImp : public MessagerImp{
public:
    
    virtual void PlaySound(){
        //==========
    }
    virtual void DrawShape(){
        //==========
    }
    virtual void WriteText(){
        //==========
    }
    virtual void Connect(){
        //==========
    }
};



//业务抽象 m

//类的数目：1+n+m

class MessagerLite :public Messager {  //Messager中有指向实现的指针

    
public:
    MessagerLite(MessagerImp* mImp) : Messager(mImp) {}
    virtual void Login(string username, string password){
        
        messagerImp->Connect();
        //........
    }
    virtual void SendMessage(string message){
        
        messagerImp->WriteText();
        //........
    }
    virtual void SendPicture(Image image){
        
        messagerImp->DrawShape();
        //........
    }
};



class MessagerPerfect  :public Messager {
    
   
public:
    MessagerPerfect(MessagerImp* mImp) : Messager(mImp) {}
    virtual void Login(string username, string password){
        
        messagerImp->PlaySound();
        //********
        messagerImp->Connect();
        //........
    }
    virtual void SendMessage(string message){
        
        messagerImp->PlaySound();
        //********
        messagerImp->WriteText();
        //........
    }
    virtual void SendPicture(Image image){
        
        messagerImp->PlaySound();
        //********
        messagerImp->DrawShape();
        //........
    }
};




void Process(){
    //运行时装配
    MessagerImp* mImp=new PCMessagerImp();  //实例化一个具体实现
    Messager *m = new MessagerLite(mImp);   //实例化一个业务抽象
}


