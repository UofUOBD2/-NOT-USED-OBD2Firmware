#ifndef PID_H
#define PID_H

// PIDs are IDs which are sent to the vehicle to gather data
class PID
{
  // Current data
  enum class Service01
  {
    PIDS_SUPPORTED = 0x0100,
    FUEL_PRESSURE = 0x010A,
    ENGINE_RPM = 0x010C,
    VEHICLE_SPEED = 0x010D,


  }

  // Free frame data
  enum class Service02
  {

  }

  // Trouble Codes
  enum class Service03
  {

  }

  // Clear Trouble Codes
  enum class Service04
  {

  }

  // Test Results (Non-CAN)
  enum class Service05
  {

  }

  // Test Results (CAN)
  enum class Service06
  {

  }

  // Pending Trouble Codes
  enum class Service07
  {

  }

  // Self Diagnostic Results
  enum class Service08
  {

  }

  // Vehicle Information
  enum class Service09
  {

  }
};

#endif
