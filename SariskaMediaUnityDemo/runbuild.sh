# shellcheck disable=SC2096
#!/bin/bash # Script to build extension and then prepare it for uploading it into local extension

echo "Building Sariska Android Plugin"

./gradlew clean
./gradlew build

echo "Copy built aar file to unity assets"

file="SariskaMediaUnityPlugin-debug.aar"
if [ -f "../Assets/Plugins/Android/$file" ] ; then
  rm ../Assets/Plugins/Android/$file
fi

cp SariskaMediaUnityPlugin/build/outputs/aar/$file ../Assets/Plugins/Android/

echo "Copying successful!"
