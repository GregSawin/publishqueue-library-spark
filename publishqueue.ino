// This #include statement was automatically added by the Particle IDE.
#include "PublishQueue.h"

// This #include statement was automatically added by the Particle IDE.
#include "elapsedMillis/elapsedMillis.h"


PublishQueue pubQueue(10000);


char version[]="v0.04.TAS.PQ";

void setup()
{
    Serial.begin(9600);

    Serial.println("\n\n\n\n\n\n\n");
    Serial.println("version:" + String(version));
    Particle.publish("version",version);

    pubQueue.Publish("EventName1","11111");
    pubQueue.Publish("EventName2","22222");
    pubQueue.Publish("EventName3","33333");
    pubQueue.Publish("EventName4","44444");
    pubQueue.Publish("EventName5","55555");
    pubQueue.Publish("EventName6","66666");
    pubQueue.Publish("EventName7","77777");
    pubQueue.Publish("EventName8","88888");
    pubQueue.Publish("EventName9","99991");
    pubQueue.Publish("EventName10","99992");
    pubQueue.Publish("EventName11","99993");
    pubQueue.Publish("EventName12","99994");
    pubQueue.Publish("EventName13","99995");
    pubQueue.Publish("EventName14","99996");
    pubQueue.Publish("EventName15","99997");
    pubQueue.Publish("EventName16","99998");
}

void loop()
{
    pubQueue.Process();
    //delay(500);
}
