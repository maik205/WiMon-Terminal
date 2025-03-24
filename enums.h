#pragma once

enum SensorConnectionState {
  UNPAIRED,
  OPEN_ACK,
  PAIRED
};

enum StatusLEDColor {
  RED,
  YELLOW,
  GREEN
};

enum TerminalStatus {
  NORMAL,
  RADIO_ERROR,
  UNSTABLE_VITALS

};

enum ValueStatus {
  STABLE,
  CRITICAL
};