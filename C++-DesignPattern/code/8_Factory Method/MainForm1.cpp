class MainForm : public Form
{
	TextBox* txtFilePath;
	TextBox* txtFileNumber;
	ProgressBar* progressBar;

public:
	void Button1_Click(){


        //左边时抽象的，但是右边时具体的，除了用new创建，还可以用一个方法生成类
		ISplitter * splitter=
            new BinarySplitter();//依赖具体类， 不能稳定
        
        splitter->split();

	}
};



