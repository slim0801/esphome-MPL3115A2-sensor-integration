#include "esphome.h"
#include "Adafruit_MPL3115A2.h"
#include "Wire.h"
#include "SPI.h" // it is included in case you get compilation error


class MPL3115A2Sensor : public PollingComponent  {
 public:
  Adafruit_MPL3115A2 baro;
  Sensor *temperature_sensor = new Sensor();
  Sensor *pressure_sensor = new Sensor();

  MPL3115A2Sensor() : PollingComponent(5000)  { }

  void setup() override {
    baro.begin();
  }

  void update() override {

    if (!baro.begin()) {
        //ESP_LOGE(TAG, "Couldnt find sensor");
        return;
    }

    // This is the actual sensor reading logic.
    float temperature = baro.getTemperature();
    temperature_sensor->publish_state(temperature);

    int pressure = baro.getPressure();
    pressure_sensor->publish_state(pressure / 100.0);
  }
};