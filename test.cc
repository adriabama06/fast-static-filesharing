#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "<h1>Hello world</h1>";
    });

    CROW_ROUTE(app, "/json")([](){
        crow::json::wvalue res({
            {"status", "ok"},
            {"data", {
                {"message", "Hello World"}
            }}
        });

        return res;
    });

    app.port(8080).multithreaded().run();
}