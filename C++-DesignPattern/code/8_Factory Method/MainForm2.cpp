class MainForm : public Form
{
    SplitterFactory*  factory;//工厂

public:
    
    MainForm(SplitterFactory*  factory){  //根据传进来的具体工厂类， 去调用后面的对应的createSplitter()
        this->factory=factory;
    }
    
	void Button1_Click(){

        
		ISplitter * splitter=
            factory->CreateSplitter(); //多态new
        
        splitter->split();   //根据上面返回的具体类调用对应的split()

	}
};



