//抽象类
class ISplitter{
public:
    virtual void split()=0;  //这个方法子类有不同的实现
    virtual ~ISplitter(){}
};

//工厂类
class SplitterFactory {
    virtual ISplitter* CreateSplitter()=0; 
};

//具体类
class BinarySplitter : public ISplitter{
    virtual void split() override{}
};

class TxtSplitter: public ISplitter{
    virtual void split() override{}
};

class PictureSplitter: public ISplitter{
    virtual void split() override{}
};

class VideoSplitter: public ISplitter{
    virtual void split() override{}
};

//具体工厂
class BinarySplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new BinarySplitter();
    }
};

class TxtSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new TxtSplitter();
    }
};

class PictureSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new PictureSplitter();
    }
};

class VideoSplitterFactory: public SplitterFactory{
public:
    virtual ISplitter* CreateSplitter(){
        return new VideoSplitter();
    }
};

