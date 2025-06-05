from setuptools import find_packages, setup

package_name = 'squirtlebot_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ben-may',
    maintainer_email='ben-may@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "squirtle_controller_lifecycle_manager = squirtlebot_py.squirtle_controller_lifecycle_manager:main",
            "turtlebot3_controller_lifecycle_manager = squirtlebot_py.turtlebot3_controller_lifecycle_manager:main"
        ],
    },
)
