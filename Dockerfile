FROM osrf/ros:humble-desktop

SHELL ["/bin/bash", "-c"]

RUN apt-get update && apt-get install -y \
    python3-flask \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /ws
COPY ./src /ws/src

RUN source /opt/ros/humble/setup.bash && \
    colcon build

EXPOSE 5000

CMD ["bash", "-c", "source /opt/ros/humble/setup.bash && source /ws/install/setup.bash && ros2 launch ctd_system system.launch.py"]