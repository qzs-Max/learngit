#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to inspection_interfaces__msg__InspectionStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InspectionStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub location_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub location_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,

}



impl Default for InspectionStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InspectionStatus::default())
  }
}

impl rosidl_runtime_rs::Message for InspectionStatus {
  type RmwMsg = super::msg::rmw::InspectionStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        location_x: msg.location_x,
        location_y: msg.location_y,
        v: msg.v,
        battery: msg.battery,
        status: msg.status.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      location_x: msg.location_x,
      location_y: msg.location_y,
      v: msg.v,
      battery: msg.battery,
        status: msg.status.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      location_x: msg.location_x,
      location_y: msg.location_y,
      v: msg.v,
      battery: msg.battery,
      status: msg.status.to_string(),
    }
  }
}


