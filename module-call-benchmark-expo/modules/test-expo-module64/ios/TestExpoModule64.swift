import ExpoModulesCore

public class TestExpoModule64: Module {
  public func definition() -> ModuleDefinition {
    Name("TestExpoModule64")

    AsyncFunction("queryTtiDurationAsync") { () -> Int64 in
      guard let performanceLogger = self.appContext?.reactBridge?.performanceLogger else {
        throw Exceptions.RuntimeLost()
      }
      return performanceLogger.duration(for: .RCTPLTTI)
    }
  }
}
