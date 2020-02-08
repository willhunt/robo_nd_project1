# Project 1, Build My World
## Udacity Robotics Software Engineer Nanodegree
Project for the Build My World project of the Robotics Software Engineer Nanodegree program from Udacity.

## Running
The environment variables will need to be set to find the model and plugin files. Enter the following in the termonal
```
export GAZEBO_MODEL_PATH=${GAZEBO_MODEL_PATH}:/<path>/model
export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:/<path>/build
```
The model can then be launched from the /world folder (--verbose optional)
```
gazebo test.world --verbose
```

## Editing Plugins
If editing plugin scripts in /scripts folder then they must be rebuilt. Navigate to /build folder and run:
```
cmake ../
make
```

## Acknowledgements
The robot model was created using [onshape-to-robot](https://github.com/Rhoban/onshape-to-robot) tool licenced under an [MIT licence](https://github.com/Rhoban/onshape-to-robot/blob/master/LICENSE)
