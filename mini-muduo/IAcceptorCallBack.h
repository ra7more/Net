#ifndef RANET_IACCEPTORCALLBACK_H
#define RANET_IACCEPTORCALLBACK_H

class IAcceptorCallBack
{
public:
    virtual void newConnection(int sockfd) = 0;
};

#endif //RANET_IACCEPTORCALLBACK_H
