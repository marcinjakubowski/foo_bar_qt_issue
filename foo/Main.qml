import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        x: 100
        y: 100
        text: obj.foo.x
        // works
    }

    Text {
        x: 100
        y: 120
        text: obj.bar.x
        // crashes
    }
}
