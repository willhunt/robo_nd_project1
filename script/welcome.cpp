#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginWelcome : public WorldPlugin
  {
    public: WorldPluginWelcome() : WorldPlugin()
            {
              printf("World loaded for Build My World project of Udacity Robotics Nanodegree.\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcome)
}
