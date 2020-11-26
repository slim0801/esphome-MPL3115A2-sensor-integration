Integration of barometric sensor MPL3115A2 into ESPHOME and Home Assistant. 
Based on documentation found here: https://esphome.io/components/sensor/custom.html

1. If you want make it compatible with HomeAssistant first you need to add the sensor with no configuration from HomeAssistant > EspHome tab.
2. Then edit the YAML file and paste the contents from mpl3115a2.yaml (you need to edit your WIFI user and pass and AP pass based on your network and sensor, you may need to edit your local IP also)
3. Copy the file mpl3115a2.h into your HomeAssistant folder /usr/share/hassio/homeassistant/esphome/YOURSENSORNAME/src/

For more info you can contact me at andreislim@gmail.com
