import { StatusBar } from "expo-status-bar";
import { useEffect, useState } from "react";
import { StyleSheet, Text, View } from "react-native";

import { queryTtiDurationAsync } from "test-turbo-module1";

export default function App() {
  const [ttiTime, setTtiTime] = useState(0);
  const [nativeCallTime, setNativeCallTime] = useState("");

  async function loopCallsAsync() {
    const start = performance.now();
    for (let i = 0; i < 1000; i++) {
      await queryTtiDurationAsync();
    }
    const end = performance.now();
    setNativeCallTime((end - start).toFixed(2));
  }

  async function setupAsync() {
    const tti = await queryTtiDurationAsync();
    setTtiTime(tti);
    loopCallsAsync();
  }

  useEffect(() => {
    setupAsync();
  }, []);

  return (
    <View style={styles.container}>
      <Text
        style={styles.text}
      >{`TTI from Turbo Module: ${ttiTime}`}</Text>
      <Text style={styles.text}>{`Native call time: ${nativeCallTime}ms`}</Text>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
  text: {
    fontSize: 24,
  },
});
