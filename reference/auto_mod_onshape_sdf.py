# Script to modify the model.sdf files creayed by on-sape-to-robot based upon personal requirments
import xml.etree.ElementTree as ET

# Enter this data ---------------------------------------
# sdf file to edit
sdf_file = '/home/workspace/Project1/robo_nd_project1/models/wheelie_robot_stabe/robot.sdf'
# Location of mesh files
mesh_path = 'wheelie_robot_stable/meshes'

tree = ET.parse(sdf_file)
# root = tree.getroot()

tree.write(sdf_file)
