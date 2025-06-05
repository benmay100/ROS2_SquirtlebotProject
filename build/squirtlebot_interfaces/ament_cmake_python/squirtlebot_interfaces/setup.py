from setuptools import find_packages
from setuptools import setup

setup(
    name='squirtlebot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('squirtlebot_interfaces', 'squirtlebot_interfaces.*')),
)
