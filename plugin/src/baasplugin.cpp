#include <qqml.h>
#include "baasplugin.h"
#include "parse.h"
#include "baasmodel.h"

void BaasPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("BaaS"));
    qmlRegisterType<Parse>(uri, 1, 0, "Parse");
    qmlRegisterType<BaaSModel>(uri, 1, 0, "BaaSModel");


}

//Q_EXPORT_PLUGIN2(baas, BaaSPlugin);
