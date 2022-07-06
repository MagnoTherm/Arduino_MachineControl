#include "Arduino_MachineControl.h"

namespace machinecontrol
{
    RTDClass temp_probes;
#ifdef CORE_CM7
    COMMClass comm_protocols;
#endif
    AnalogInClass analog_in;
    AnalogOutClass analog_out;
    EncoderClass encoders;
    DigitalOutputsClass digital_outputs;
    ProgrammableDINClass digital_inputs;
    ProgrammableDIOClass digital_programmables;
    RtcControllerClass rtc_controller;
    USBClass usb_controller;
}
