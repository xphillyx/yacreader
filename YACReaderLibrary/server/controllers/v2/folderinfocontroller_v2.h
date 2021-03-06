#ifndef FOLDERINFOCONTROLLER_V2_H
#define FOLDERINFOCONTROLLER_V2_H

#include "httprequest.h"
#include "httpresponse.h"
#include "httprequesthandler.h"

class FolderInfoControllerV2 : public HttpRequestHandler
{
    Q_OBJECT
    Q_DISABLE_COPY(FolderInfoControllerV2)
public:
    /** Constructor */
    FolderInfoControllerV2();

    /** Generates the response */
    void service(HttpRequest &request, HttpResponse &response) override;

private:
    void serviceComics(const int &library, const qulonglong &folderId, HttpResponse &response);
};

#endif // FOLDERINFOCONTROLLER_H
