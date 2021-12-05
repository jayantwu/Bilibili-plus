class ISplitter{
public:
    virtual void split()=0;
    virtual ~ISplitter(){}
};
// 各种各样的分割方式
class BinarySplitter : public ISplitter{
    
};

class TxtSplitter: public ISplitter{
    
};

class PictureSplitter: public ISplitter{
    
};

class VideoSplitter: public ISplitter{
    
};

