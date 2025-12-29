from setuptools import find_packages
from setuptools import setup

setup(
    name='tros_perception_fusion_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('tros_perception_fusion_msgs', 'tros_perception_fusion_msgs.*')),
)
