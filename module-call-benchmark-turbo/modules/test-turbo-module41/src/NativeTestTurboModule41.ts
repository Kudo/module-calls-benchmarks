import type { TurboModule } from "react-native";
import { TurboModuleRegistry } from "react-native";

export interface Spec extends TurboModule {
  queryTtiDurationAsync(): Promise<number>;
}

export default TurboModuleRegistry.getEnforcing<Spec>("TestTurboModule41");
