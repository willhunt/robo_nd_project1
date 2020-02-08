#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>

namespace gazebo
{
  class ModelPluginSpinArm : public ModelPlugin
  {
    public: void Load(physics::ModelPtr _parent, sdf::ElementPtr /*_sdf*/)
    {
      // Store the pointer to the model
      this->model = _parent;

      // Listen to the update event. This event is broadcast every
      // simulation iteration.
      this->updateConnection = event::Events::ConnectWorldUpdateBegin(
          std::bind(&ModelPluginSpinArm::OnUpdate, this));
    }

    // Called by the world update start event
    public: void OnUpdate()
    {
      	// Apply a small linear velocity to the model.
      	//this->model->SetLinearVel(ignition::math::Vector3d(0.3, 0, 0));
		// Apple torque to robot arms
		//this->model->GetLink("arm_1")->SetTorque(math::Vector3(-1.2, 0, 0));
		//this->model->GetLink("arm_2")->SetTorque(math::Vector3(-1.2, 0, 0));
		//this->model->GetJoint("leftarm")->SetForce(0, 0.7);
		//this->model->GetJoint("rightarm")->SetForce(0, -0.7);
		//std::vector< std::string > joints = {"leftarm", "rightarm"};
		//gazebo::physics::JointPtr joint;
		//for (int i=0; i < joints.size(); i++) {
		//	joint = this->model->GetJoint(joints[i]);
		//	gazebo::math::Angle currentPosition = joint->GetAngle(0);
		//	joint->SetHighStop(0, currentPosition);
		//	joint->SetLowStop(0, currentPosition);
		//}
      this->model->GetJoint("spin_JOINT")->SetVelocity(0, 1);  // axis, velocity [rad/s]
		
    }

    // Pointer to the model
    private: physics::ModelPtr model;

    // Pointer to the update event connection
    private: event::ConnectionPtr updateConnection;
  };

  // Register this plugin with the simulator
  GZ_REGISTER_MODEL_PLUGIN(ModelPluginSpinArm)
}
